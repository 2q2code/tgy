;***************************************************
;* Hobbyking SS Series 190-200A ESC (HK-SS200ALV)  *
;* Original fuses are lfuse:0xbf hfuse:0xc1        *
;* Same as Red Brick 50A but with reversed A and C *
;***************************************************

#include "macro_fix.inc"

.equ	F_CPU		= 16000000
.equ	USE_INT0	= 1
.equ	USE_I2C		= 0
.equ	USE_UART	= 0
.equ	USE_ICP		= 0

;*********************
; PORT D definitions *
;*********************
.equ	AnFET		= 7	;o
.equ	c_comp		= 6	;i common comparator input (AIN0)
.equ	ApFET		= 5	;o
.equ	BpFET		= 4	;o
.equ	BnFET		= 3	;o
.equ	rcp_in		= 2	;i r/c pulse input
.equ	CnFET		= 1	;o
.equ	CpFET		= 0	;o

.equ	INIT_PD		= 0
.equ	DIR_PD		= (1<<ApFET)+(1<<BpFET)+(1<<CpFET)+(1<<AnFET)+(1<<BnFET)+(1<<CnFET)

.equ	ApFET_port	= PORTD
.equ	BpFET_port	= PORTD
.equ	CpFET_port	= PORTD
.equ	AnFET_port	= PORTD
.equ	BnFET_port	= PORTD
.equ	CnFET_port	= PORTD

;*********************
; PORT C definitions *
;*********************
.equ	mux_voltage	= 7	; ADC7 voltage input (47k from Vbat, 2.0k to gnd, 10.24V in -> .410V at ADC7)
;.equ			= 6	; ADC6
;.equ			= 5	; ADC5
.equ	mux_a		= 4	; ADC4 phase input
.equ	mux_b		= 3	; ADC3 phase input
.equ	mux_c		= 2	; ADC2 phase input
;.equ			= 1	; ADC1
;.equ			= 0	; ADC0

.equ	O_POWER		= 47
.equ	O_GROUND	= 2

.equ	INIT_PC		= 0
.equ	DIR_PC		= 0

;*********************
; PORT B definitions *
;*********************
;.equ			= 7
;.equ			= 6
;.equ			= 5	(sck stk200 interface)
;.equ			= 4	(miso stk200 interface)
;.equ			= 3	(mosi stk200 interface)
;.equ			= 2
;.equ			= 1
;.equ			= 0

.equ	INIT_PB		= 0
.equ	DIR_PB		= 0
