#include "script_component.hpp"

if (!hasInterface) exitWith {};

params ["_alias_bolt_2","_combinatie","_alias_flicker","_sound_far_s_l","_intens_vf"];
private ["_sound_delay","_cloud","_lum_fulg_s_l"];

_sound_delay = (player distance _alias_bolt_2)/350;

if (_combinatie in ["sunet_lumina","lumina"]) then {
	if (sunOrMoon == 0) then {
		if (storm_clouds) then {
			_cloud = "#particlesource" createVehicleLocal _alias_bolt_2;
			_cloud setParticleCircle [0,[0,0,0]];
			_cloud setParticleRandom [0, [1500, 1500, 100], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
			_cloud setParticleParams[["\A3\data_f\cl_basic", 1, 0, 1],"","Billboard",1,3,[0,0,800],[0,0,50],3,10,7.9,0.2,[400,450,500],[[0.1,0.1,0.5,0],[1,1,1,0.005],[0,0,0.5,0]],[0,0],0,0,"","",player];
			_cloud setDropInterval 0.002;
			sleep 1;
			deleteVehicle _cloud;
		};
		_lum_fulg_s_l = "#lightpoint" createvehiclelocal _alias_bolt_2;
		_lum_fulg_s_l setLightDayLight true;
		_lum_fulg_s_l setLightUseFlare false;
		_lum_fulg_s_l setLightFlareSize 0;
		_lum_fulg_s_l setLightFlareMaxDistance 2000;
		_lum_fulg_s_l setLightAmbient[0.3,0.3,0.6];
		_lum_fulg_s_l setLightColor[0.2,0.2,0.2];
		_lum_fulg_s_l setLightAttenuation [0,0,0,0,0,900];
		_lum_fulg_s_l setLightIntensity	 200;
		_lum_fulg_s_l setLightBrightness 100+random 50;

		while {_alias_flicker > 0} do {
			sleep (0.1 + (random 0.1));
			_lum_fulg_s_l setLightBrightness 30+ random 30;
			sleep 0.2;
			_lum_fulg_s_l setLightBrightness 100+random 100;
			_alias_flicker = _alias_flicker-1;
		};
		sleep 0.2;
		_lum_fulg_s_l setLightBrightness 30;
		sleep 0.2;
		_intens_vf = 150+random 50;
		_lum_fulg_s_l setLightBrightness _intens_vf;
		sleep 0.3;

		while {_intens_vf>0} do {
			_intens_vf = _intens_vf-50;
			_lum_fulg_s_l setLightIntensity 0;
			_lum_fulg_s_l setLightBrightness _intens_vf;
			sleep 0.1;
		};
		_lum_fulg_s_l setLightBrightness 0;
		_lum_fulg_s_l setLightIntensity  0;
		deleteVehicle _lum_fulg_s_l;
	};
};

if (_combinatie in ["sunet","sunet_lumina"]) then {
	sleep _sound_delay;
	playsound _sound_far_s_l;
};
