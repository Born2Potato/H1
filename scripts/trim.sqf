// ===============================
// TRIM SYSTEM
// ===============================

// Initialize trim values
trimPitch = 0;   // Nose up/down trim (-10 to 10)
trimRoll = 0;    // Roll left/right trim (-10 to 10)
trimStep = 0.1;  // Trim adjustment per key press
trimMax = 10;    // Maximum trim value
trimMin = -10;   // Minimum trim value

// Apply Trim Continuously
[] spawn {
    while {true} do {
        private _heli = vehicle player;
        if (_heli isKindOf "Helicopter") then {
            private _cyclicX = (inputAction "HeliCyclicLeft") - (inputAction "HeliCyclicRight");
            private _cyclicY = (inputAction "HeliCyclicForward") - (inputAction "HeliCyclicBack");

            // Apply trim adjustments
            _cyclicX = (_cyclicX + trimRoll) max -1 min 1;
            _cyclicY = (_cyclicY + trimPitch) max -1 min 1;

            _heli setPilotCyclic [ _cyclicX, _cyclicY ];
        };
        sleep 0.05;
    };
};

// Detect Key Presses for Trim Control
[] spawn {
    while {true} do {
        private _heli = vehicle player;
        if (_heli isKindOf "Helicopter") then {
            // Pitch Trim (Nose Up / Nose Down)
            if (inputAction "User1" > 0) then { trimPitch = trimPitch min trimMax - trimStep; };
            if (inputAction "User2" > 0) then { trimPitch = trimPitch max trimMin + trimStep; };

            // Roll Trim (Left / Right)
            if (inputAction "User3" > 0) then { trimRoll = trimRoll max trimMin + trimStep; };
            if (inputAction "User4" > 0) then { trimRoll = trimRoll min trimMax - trimStep; };

            // Reset Trim
            if (inputAction "User5" > 0) then {
                trimPitch = 0;
                trimRoll = 0;
            };
        };

        sleep 0.1;
    };
};

// Auto-Reset Trim on Engine Off
[] spawn {
    while {true} do {
        private _heli = vehicle player;
        if (_heli isKindOf "Helicopter") then {
            if (!(isEngineOn _heli)) then {
                trimPitch = 0;
                trimRoll = 0;
            };
        };
        sleep 1;
    };
};

// Start HUD Display
[] execVM "scripts\trim_hud.sqf";