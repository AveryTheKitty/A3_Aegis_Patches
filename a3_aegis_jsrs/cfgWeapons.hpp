class CfgWeapons
{
	class MGun;
	class LMG_RCWS;
	// Fix for Aegis sounds overwriting JSRS sounds
	class LMG_Minigun: LMG_RCWS
	{
		class manual: MGun
		{
			class StandardSound
			{
				begin1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\m134\minigun_s1.ogg",0.7,1,2200,{2,36879}};
				soundbegin[] = {begin1,1};
				soundSetShot[] = {jsrs_m134_shot_soundset};
			};
		};
	};
	class GMG_F;
	// GMG 25 mm
	class GMG_25mm: GMG_F
	{
		soundFly[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\mortar_fly.ogg",db0,1.5,500};
		class manual: GMG_F
		{
			class StandardSound
			{
				soundSetShot[] =
				{
					jsrs_gmg20_shot_soundset,
					jsrs_20mm_reverb_soundset
				};
			};
		};
	};
	class RocketPods;
	class rockets_50mm: RocketPods
	{
		class Far_AI: RocketPods
		{
			class StandardSound
			{
				soundSetShot[] = 
				{
					jsrs_missile_2_shot_soundset,
					jsrs_pods_reverb_soundset
				};
			};
		};
		class Burst: RocketPods
		{
			class StandardSound
			{
				soundSetShot[] = 
				{
					jsrs_missile_2_shot_soundset,
					jsrs_pods_reverb_soundset
				};
			};
		};
	};
	class MissileLauncher;
	class launcher_SPG9: MissileLauncher
	{
		soundFly[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\SoundFly1.ogg",db0,1.5,500};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smaw_shot_soundset,
					jsrs_warhead_reverb_soundset
				};
			};
		};
	};
	class Rifle_Base_F;
	class UGL_F;
	// M32 40 mm
	class GL_M32_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\M32_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\M32_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_m32_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// Punisher 25 mm
	class GL_XM25_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_gmg20_shot_soundset,
					jsrs_20mm_reverb_soundset
				};
			};
		};
	};
	class Launcher_Base_F;
	class Rifle_Long_Base_F;
	// Suppressed sounds for M320 LRR
	class LRR_base_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_m320r_shot_silenced_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// Warfare-50 12.7 mm
	class WF50_base_F: Rifle_Long_Base_F
	{
		soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",db-3,1,20};
		soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",db-3,1,20};
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_dry",db-6,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_reload",db-12,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_m107_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// Fix for Aegis sounds overwriting JSRS sounds, plus suppressed sounds
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_zafir_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_zafir_shot_silenced_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
		};
	};
	class Pistol_Base_F;
	// C-1911 .45 ACP
	class hgun_C1911_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_acpc_shot_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_acpc_shot_silenced_soundset,
					jsrs_cal45_sd_reverb_soundset
				};
			};
		};
	};
	// G17 9 mm
	class hgun_G17_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_p226_shot_soundset,
					jsrs_9mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_p226_shot_silenced_soundset,
					jsrs_9mm_sd_reverb_soundset
				};
			};
		};
	};
	// Mk26 12.7 mm
	class hgun_Mk26_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_BrenMK2_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// RSh-42 12.7 mm
	class hgun_Pistol_heavy_03_F: Pistol_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\MP412\MP412_dry",db-8,1,20};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Pistols\MP412\MP412_reload",db0,1,30};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_Dp28_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// AK-12 5.45 mm
    class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class arifle_AK12_F: arifle_AK12_base_F{};
	class arifle_AK12_545_F: arifle_AK12_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12_lush_F: arifle_AK12_base_F{};
	class arifle_AK12_545_lush_F: arifle_AK12_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F{};
	class arifle_AK12_545_arid_F: arifle_AK12_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_lush_F: arifle_AK12_GL_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_arid_F: arifle_AK12_GL_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_F: arifle_AK12U_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12U_lush_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_lush_F: arifle_AK12U_lush_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class arifle_AK12U_arid_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_arid_F: arifle_AK12U_arid_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ak74_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	// L85A3 6.5 mm
	class arifle_SA80_base_F: Rifle_Base_F
	{
		soundBipodDown[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",db-3,1,20};
		soundBipodUp[] = {"\A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",db-3,1,20};
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_l85a2_shot_soundset,
					jsrs_6x5mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_type115_shot_silenced_soundset,
					jsrs_6x5mm_sd_reverb_soundset
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_l85a2_shot_soundset,
					jsrs_6x5mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_type115_shot_silenced_soundset,
					jsrs_6x5mm_sd_reverb_soundset
				};
			};
	  	};
	};
	class arifle_SA80_GL_base_F: arifle_SA80_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\L85A3\L85A3_UGL_reload",db-2,1,10};
		};
	};
	// RPK 7.62 mm
	class arifle_RPK_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_akm_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_akm_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_akm_shot_soundset,
					jsrs_7x62mm_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_akm_shot_silenced_soundset,
					jsrs_7x62mm_sd_reverb_soundset
				};
			};
		};
	};
	class Rifle_Short_Base_F;
	// AA-40 12G
	class sgun_AA40_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA12\AA12_reload",db0,1,10};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_aa12_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// Bulldog 12G
	class sgun_KSG_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_m590_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
		class Secondary: Rifle_Short_Base_F
		{
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						jsrs_m590_shot_soundset,
						jsrs_12x7mm_reverb_soundset
					};
				};
			};
		};
	};
	// M4 SSAS 12G
	class sgun_M4_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_dry",db-3,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_saiga12_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// BK-153 12G
	class sgun_Mp153_black_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_dry",db-15,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Shotguns\MP153\MP153_reload",db0,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_saiga12_shot_soundset,
					jsrs_12x7mm_reverb_soundset
				};
			};
		};
	};
	// Fix for Vermin SMG's firemodes being reset by JSRS
	class SMG_01_base: Rifle_Short_Base_F
	{
		bullet1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",db6,1,10};
		bullet2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",db6,1,10};
		bullet3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",db6,1,10};
		bullet4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",db6,1,10};
		bullet5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",db6,1,10};
		bullet6[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",db6,1,10};
		bullet7[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",db6,1,10};
		bullet8[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",db6,1,10};
		bullet9[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",db6,1,10};
		bullet10[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",db6,1,10};
		bullet11[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",db6,1,10};
		bullet12[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",db6,1,10};
		soundbullet[] =
		{
			bullet1,0.08,
			bullet2,0.084,
			bullet3,0.084,
			bullet4,0.084,
			bullet5,0.093,
			bullet6,0.093,
			bullet7,0.074,
			bullet8,0.074,
			bullet9,0.084,
			bullet10,0.085,
			bullet11,0.083,
			bullet12,0.083
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_silenced_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_silenced_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_smg45_shot_silenced_soundset,
					jsrs_cal45_reverb_soundset
				};
			};
		};
	};
	class SMG_01_F: SMG_01_base
	{
		class Single: Single{};
		class Burst: Burst{};
		class FullAuto: FullAuto{};
	};
	// MP7 4.6 mm
	class SMG_04_base_F: Rifle_Short_Base_F
	{
		drySound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_dry",db-15,1,10};
		reloadMagazineSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_reload",db0,1,30};
		changeFiremodeSound[] = {"\A3_Aegis\Sounds_F_Aegis\arsenal\weapons\SMGs\SMG04\SMG04_firemode",db-10,1,5};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ad97_shot_soundset,
					jsrs_5x56mm_reverb_soundset,
					jsrs_all_dist_tail
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ad97_shot_silenced_soundset,
					jsrs_5x56mm_sd_reverb_soundset
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ad97_shot_soundset,
					jsrs_5x56mm_reverb_soundset,
					jsrs_all_dist_tail
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					jsrs_ad97_shot_silenced_soundset,
					jsrs_5x56mm_sd_reverb_soundset
				};
			};
		};
	};
};