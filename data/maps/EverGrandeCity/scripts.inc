# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"

# 3 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 4 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 5 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity/scripts.pory"

# 7 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 8 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/EverGrandeCity/scripts.pory"
	end
# 10 "data/maps/EverGrandeCity/scripts.pory"

# 11 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 12 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 13 "data/maps/EverGrandeCity/scripts.pory"
	end
# 14 "data/maps/EverGrandeCity/scripts.pory"

# 15 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 16 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 17 "data/maps/EverGrandeCity/scripts.pory"
	end
# 18 "data/maps/EverGrandeCity/scripts.pory"

# 19 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 20 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 21 "data/maps/EverGrandeCity/scripts.pory"
	end
# 22 "data/maps/EverGrandeCity/scripts.pory"

# 23 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 25 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/EverGrandeCity/scripts.pory"
	end
# 27 "data/maps/EverGrandeCity/scripts.pory"

# 28 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 29 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 30 "data/maps/EverGrandeCity/scripts.pory"

# 31 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 32 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 33 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 34 "data/maps/EverGrandeCity/scripts.pory"

# 35 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 38 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

EverGrandeCity_EventScript_Ruby::
# 42 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single TRAINER_RUBY, Ruby_Intro, Ruby_Outro
# 43 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Ruby, MSGBOX_AUTOCLOSE
# 44 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
	end


EverGrandeCity_EventScript_Sapphire::
# 61 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single TRAINER_SAPPHIRE, Sapphire_Intro, Sapphire_Outro
# 62 "data/maps/EverGrandeCity/scripts.pory"
	msgbox PostBattle_Sapphire, MSGBOX_AUTOCLOSE
# 63 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
	end


Ruby_Intro::
# 48 "data/maps/EverGrandeCity/scripts.pory"
	.string "Your mom$"

Ruby_Outro::
# 52 "data/maps/EverGrandeCity/scripts.pory"
	.string "Your mom$"

PostBattle_Ruby::
# 56 "data/maps/EverGrandeCity/scripts.pory"
	.string "good luck king$"

Sapphire_Intro::
# 67 "data/maps/EverGrandeCity/scripts.pory"
	.string "Get over here, ya slippery lil bastard$"

Sapphire_Outro::
# 71 "data/maps/EverGrandeCity/scripts.pory"
	.string "That's a bummer innit$"

PostBattle_Sapphire::
# 75 "data/maps/EverGrandeCity/scripts.pory"
	.string "good luck chat$"
