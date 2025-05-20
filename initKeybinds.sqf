[
    "Tato H1","tato_h1_flir_copilotCamera","Copilot Camera", // Control + Right click
    {
    private _isCopilot = (vehicle player unitTurret player) isEqualTo [0];
      if (
        !_isCopilot ||
        {!tato_h1_flir_controllable} ||
        {tato_h1_flir_isVisibleMap} ||
        {tato_h1_flir_featureCamera != ""} ||
        {!isNull curatorCamera}
      ) exitWith {false};
      tato_h1_flir_isInScriptedCamera = !tato_h1_flir_isInScriptedCamera;
      [tato_h1_flir_isInScriptedCamera] call tato_h1_flir_fnc_scriptedCamera;
      false
    },{},
    [241, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_up","FLIR Up", // Control + W
    {if (tato_h1_flir_isPipHidden) exitWith {false}; tato_h1_flir_up = 1; false},{tato_h1_flir_up = 0;},
    [17, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_down","FLIR Down", // Control + S
    {if (tato_h1_flir_isPipHidden) exitWith {false}; tato_h1_flir_down = 1; false},{tato_h1_flir_down = 0;},
    [31, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_left","FLIR Left", // Control + A
    {if (tato_h1_flir_isPipHidden) exitWith {false}; tato_h1_flir_left = 1; false},{tato_h1_flir_left = 0;},
    [30, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_right","FLIR Right", // Control + D
    {if (tato_h1_flir_isPipHidden) exitWith {false}; tato_h1_flir_right = 1; false},{tato_h1_flir_right = 0;},
    [32, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_slew",
    ["FLIR Slew Aim", "Hold this key and use mouse or 'Aim <Up|Down|Left|Right>' input to slew the FLIR."], // Unbound
    {
      if (tato_h1_flir_isPipHidden || {tato_h1_flir_isInScriptedCamera}) exitWith {false};
      tato_h1_flir_slewAim = true;
      if (tato_h1_flir_setting_AimSlewBlockMouse && {!ace_interact_menu_keyDown}) then {
          (findDisplay 46) createDisplay "tato_h1_flir_mouseBlocker";
          (finddisplay 86005) displayAddEventHandler ["KeyUp", {[_this,'keyup'] call CBA_events_fnc_keyHandler}];
      };
      false
    },{
      if (uiNamespace getVariable ["tato_h1_flir_mouseBlocker", false]) then {
        (findDisplay 86005) closeDisplay 0;
      };
      tato_h1_flir_slewAim = false;
    }//,
    //[32, [false, true, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_slewHMD","FLIR Slew To HMD", // Shift + T
    {
      if (tato_h1_flir_playerIsPilot || {tato_h1_flir_playerIsCopilot}) then {
        call tato_h1_flir_fnc_keyFLIRSlewToHMD;
      };
      false
    },{},
    [20, [true, false, false]],false
] call CBA_fnc_addKeybind;

/* Use base game keybind
[
    "Tato H1","tato_h1_flir_c_stabilize","FLIR Stabilize", // Ctrl + T
    tato_h1_flir_fnc_setStabilization,{},
    [20, [false, true, false]],false
] call CBA_fnc_addKeybind;
*/

[
    "Tato H1","tato_h1_flir_c_zoom_inc","FLIR Zoom In", // PLUS
    {
        if (tato_h1_flir_isPipHidden) exitWith {false};
        [1] call tato_h1_flir_fnc_keyZoom;
        false
    },{},
    [13, [false, false, false]],false
] call CBA_fnc_addKeybind;

[
    "Tato H1","tato_h1_flir_c_zoom_desc","FLIR Zoom Out", // MIN
    {
        if (tato_h1_flir_isPipHidden) exitWith {false};
        [-1] call tato_h1_flir_fnc_keyZoom;
        false
    },{},
    [12, [false, false, false]],false
] call CBA_fnc_addKeybind;

/* moved to transportNightVision base game keybind
[
    "Tato H1","tato_h1_flir_pipEffect","FLIR Camera Mode", // T
    {
        if (tato_h1_flir_isPipHidden) exitWith {false};
        call tato_h1_flir_fnc_keyVisionMode
    },{},
    [20, [false, false, false]],false
] call CBA_fnc_addKeybind;
*/
