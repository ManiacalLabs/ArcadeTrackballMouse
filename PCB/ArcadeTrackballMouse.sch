EESchema Schematic File Version 4
LIBS:ArcadeTrackballMouse-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L teensy:Teensy3.2 U1
U 1 1 5BD900B9
P 5150 3150
F 0 "U1" H 5150 4737 60  0000 C CNN
F 1 "Teensy3.2" H 5150 4631 60  0000 C CNN
F 2 "TeensyMod:Teensy30_31_32_LC_NoCenterPads" H 5150 2350 60  0001 C CNN
F 3 "" H 5150 2350 60  0000 C CNN
	1    5150 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3700 2350 4150 2350
Wire Wire Line
	4150 2450 3700 2450
Text Label 3900 2150 0    50   ~ 0
YELLOW
Text Notes 3150 2000 0    50   ~ 0
YELLOW
Text Notes 3150 2100 0    50   ~ 0
GREEN
Text Notes 3150 2400 0    50   ~ 0
BLUE
Text Notes 3150 2500 0    50   ~ 0
PURPLE
$Comp
L Connector_Generic:Conn_01x08 J11
U 1 1 5BECC0B6
P 3500 2050
F 0 "J11" H 3420 2567 50  0000 C CNN
F 1 "Trackball" H 3420 2476 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x08_Pitch2.54mm" H 3500 2050 50  0001 C CNN
F 3 "~" H 3500 2050 50  0001 C CNN
	1    3500 2050
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 5BECC65F
P 2250 2900
F 0 "J1" H 2350 2850 50  0000 C CNN
F 1 "Conn_01x02" H 2170 2666 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 2900 50  0001 C CNN
F 3 "~" H 2250 2900 50  0001 C CNN
	1    2250 2900
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J2
U 1 1 5BECC88D
P 2250 3150
F 0 "J2" H 2350 3100 50  0000 C CNN
F 1 "Conn_01x02" H 2170 2916 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 3150 50  0001 C CNN
F 3 "~" H 2250 3150 50  0001 C CNN
	1    2250 3150
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J3
U 1 1 5BECC8AF
P 2250 3400
F 0 "J3" H 2350 3350 50  0000 C CNN
F 1 "Conn_01x02" H 2170 3166 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 3400 50  0001 C CNN
F 3 "~" H 2250 3400 50  0001 C CNN
	1    2250 3400
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J4
U 1 1 5BECC8D3
P 2250 3650
F 0 "J4" H 2350 3600 50  0000 C CNN
F 1 "Conn_01x02" H 2170 3416 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 3650 50  0001 C CNN
F 3 "~" H 2250 3650 50  0001 C CNN
	1    2250 3650
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J5
U 1 1 5BECC8F7
P 2250 3900
F 0 "J5" H 2350 3850 50  0000 C CNN
F 1 "Conn_01x02" H 2170 3666 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 3900 50  0001 C CNN
F 3 "~" H 2250 3900 50  0001 C CNN
	1    2250 3900
	-1   0    0    1   
$EndComp
Text GLabel 2450 3900 2    30   Input ~ 0
GND
Text GLabel 2450 3650 2    30   Input ~ 0
GND
Text GLabel 2450 3400 2    30   Input ~ 0
GND
Text GLabel 2450 3150 2    30   Input ~ 0
GND
Text GLabel 2450 2900 2    30   Input ~ 0
GND
Text GLabel 4150 2550 0    30   Input ~ 0
BTN_L
Text GLabel 4150 2650 0    30   Input ~ 0
BTN_M
Text GLabel 4150 2750 0    30   Input ~ 0
BTN_R
Text GLabel 4150 2850 0    30   Input ~ 0
BTN_DPI
Text GLabel 4150 2950 0    30   Input ~ 0
BTN_SCROLL
Text GLabel 2450 2800 2    30   Input ~ 0
BTN_L
Text GLabel 2450 3050 2    30   Input ~ 0
BTN_M
Text GLabel 2450 3300 2    30   Input ~ 0
BTN_R
Text GLabel 2450 3550 2    30   Input ~ 0
BTN_DPI
Text GLabel 2450 3800 2    30   Input ~ 0
BTN_SCROLL
$Comp
L Connector_Generic:Conn_01x02 J6
U 1 1 5BECCE78
P 2250 4250
F 0 "J6" H 2350 4200 50  0000 C CNN
F 1 "Conn_01x02" H 2170 4016 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 4250 50  0001 C CNN
F 3 "~" H 2250 4250 50  0001 C CNN
	1    2250 4250
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J7
U 1 1 5BECCE7E
P 2250 4500
F 0 "J7" H 2350 4450 50  0000 C CNN
F 1 "Conn_01x02" H 2170 4266 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 4500 50  0001 C CNN
F 3 "~" H 2250 4500 50  0001 C CNN
	1    2250 4500
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J8
U 1 1 5BECCE84
P 2250 4750
F 0 "J8" H 2350 4700 50  0000 C CNN
F 1 "Conn_01x02" H 2170 4516 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 4750 50  0001 C CNN
F 3 "~" H 2250 4750 50  0001 C CNN
	1    2250 4750
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J9
U 1 1 5BECCE8A
P 2250 5000
F 0 "J9" H 2350 4950 50  0000 C CNN
F 1 "Conn_01x02" H 2170 4766 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 5000 50  0001 C CNN
F 3 "~" H 2250 5000 50  0001 C CNN
	1    2250 5000
	-1   0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J10
U 1 1 5BECCE90
P 2250 5250
F 0 "J10" H 2350 5200 50  0000 C CNN
F 1 "Conn_01x02" H 2170 5016 50  0001 C CNN
F 2 "Connectors_JST:JST_XH_B02B-XH-A_02x2.50mm_Straight" H 2250 5250 50  0001 C CNN
F 3 "~" H 2250 5250 50  0001 C CNN
	1    2250 5250
	-1   0    0    1   
$EndComp
Text GLabel 2450 5250 2    30   Input ~ 0
GND
Text GLabel 2450 5000 2    30   Input ~ 0
GND
Text GLabel 2450 4750 2    30   Input ~ 0
GND
Text GLabel 2450 4500 2    30   Input ~ 0
GND
Text GLabel 2450 4250 2    30   Input ~ 0
GND
Text GLabel 2450 4150 2    30   Input ~ 0
LED_L
Text GLabel 2450 4400 2    30   Input ~ 0
LED_M
Text GLabel 2450 4650 2    30   Input ~ 0
LED_R
Text GLabel 2450 4900 2    30   Input ~ 0
LED_DPI
Text GLabel 2450 5150 2    30   Input ~ 0
LED_SCROLL
Text GLabel 4150 3850 0    30   Input ~ 0
LED_L
Text GLabel 4150 3950 0    30   Input ~ 0
LED_M
Text GLabel 4150 4050 0    30   Input ~ 0
LED_R
Text GLabel 4150 4150 0    30   Input ~ 0
LED_DPI
Text GLabel 4150 4250 0    30   Input ~ 0
LED_SCROLL
Wire Wire Line
	3700 2050 3900 2050
Wire Wire Line
	3900 2050 3900 2250
Wire Wire Line
	3900 2250 4150 2250
Wire Wire Line
	3700 1950 3950 1950
Wire Wire Line
	3950 1950 3950 2150
Wire Wire Line
	3950 2150 4150 2150
Text GLabel 3700 1750 2    30   Input ~ 0
GND
Text GLabel 3700 2150 2    30   Input ~ 0
GND
Text GLabel 3700 2250 2    30   Input ~ 0
VIN
Text GLabel 3700 1850 2    30   Input ~ 0
VIN
Text GLabel 4150 1850 0    30   Input ~ 0
GND
Text GLabel 6150 3950 2    30   Input ~ 0
VIN
$EndSCHEMATC
