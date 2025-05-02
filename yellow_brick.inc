;***********************************************************
;* Unknown "yellow brick" (unbranded, 30A sticker) ESC     *
;***********************************************************

.set	F_CPU		= 16000000
.equ	USE_INT0	= 0
.equ	USE_I2C		= 1
.equ	USE_UART	= 0
.equ	USE_ICP		= 0
.equ  SIMPLE_I2C  = 1

.equ  CHECK_HARDWARE    = 1
.equ  BOOT_LOADER = 0 ; Don't include the bootloader
.equ  BOOT_JUMP = 0 ; Don't look for other bootloaders
.equ  SILENT_OPERATION = 1 ; beeps are replaced with LED flash codes (I2C can still request beeps)

.equ    DEAD_LOW_NS     = 450	; May work on some boards, but be careful!
.equ    DEAD_HIGH_NS    = 8000

;*********************
; PORT D definitions *
;*********************
;.equ	mux_c		= 7	;i <plus> comparator input (AIN0)
;.equ	c_comp		= 6	;i common comparator input (AIN0)
.equ	ApFET		= 5	;o
.equ	BpFET		= 4	;o
.equ	CpFET		= 3	;o
.equ	rcp_in		= 2	;i r/c pulse input (unused)

.equ	INIT_PD		= 0
.equ	DIR_PD		= (1<<ApFET)+(1<<BpFET)+(1<<CpFET)

.equ	ApFET_port	= PORTD
.equ	BpFET_port	= PORTD
.equ	CpFET_port	= PORTD

;*********************
; PORT C definitions *
;*********************
;.equ			= 7	; ADC7
;.equ			= 6	; ADC6
.equ	i2c_clk		= 5	; ADC5/SCL
.equ	i2c_data	= 4	; ADC4/SDA
.equ	mux_a		= 3	; ADC3 phase input (originally on PC5, ADC5)
.equ	mux_b		= 2	; ADC2 phase input (originally on PC4, ADC4)
;.equ	mux_temperature	= 1	; ADC1 temperature input
.equ	mux_voltage	= 0	; ADC0 voltage input (47k from Vbat, 4k7 to gnd, 10.10V -> .918V at ADC0)

.equ	O_POWER		= 470
.equ	O_GROUND	= 47

.equ	INIT_PC		= 0
.equ	DIR_PC		= 0

;*********************
; PORT B definitions *
;*********************
.equ	red_led		  = 7
.equ	green_led		= 6
;.equ			= 5	(sck stk200 interface)
;.equ			= 4	(miso stk200 interface)
;.equ			= 3	(mosi stk200 interface)
.equ	AnFET		= 2
.equ	BnFET		= 1
.equ	CnFET		= 0

.equ	INIT_PB		= 0
.equ	DIR_PB		= (1<<red_led)+(1<<green_led)+(1<<AnFET)+(1<<BnFET)+(1<<CnFET)

.equ	AnFET_port	= PORTB
.equ	BnFET_port	= PORTB
.equ	CnFET_port	= PORTB

.MACRO RED_on
	sbi	PORTB, red_led
.ENDMACRO
.MACRO RED_off
	cbi	PORTB, red_led
.ENDMACRO
.MACRO GRN_on
	sbi	PORTB, green_led
.ENDMACRO
.MACRO GRN_off
	cbi	PORTB, green_led
.ENDMACRO