#include "script_component.hpp"

if (hasInterface) then {
    #include "initKeybinds.sqf"
};

["tato_h1_flir_syncPilots", {
  params ["_vehicle"];
  [_vehicle, false] call tato_h1_flir_fnc_syncPilots;
}] call CBA_fnc_addEventHandler;

["tato_h1_flir_syncFOV", {
  params ["_fov"];
  [_fov, false] call tato_h1_flir_fnc_setFOV;
}] call CBA_fnc_addEventHandler;

["tato_h1_flir_syncVisionMode", {
  params ["_effect"];
  [_effect, false] call tato_h1_flir_fnc_setVisionMode;
}] call CBA_fnc_addEventHandler;

["tato_h1_flir_syncCopilotView", {
  tato_h1_flir_isCopilotInGunnerView = _this;
}] call CBA_fnc_addEventHandler;
