;*************************************************
;* Multistar 6A with all NFETs on PORTD          *
;* Same as kda_nfet but without input inversion; *
;* also seen on some larger Multistar ESCs and   *
;* Sunrise 20A/40A ESCs, which typically ship    *
;* with 0-ohm resistors jumpering over NPN pads. *
;*************************************************

#include "macro_fix.inc"

.equ	F_CPU		= 16000000
.equ	USE_INT0	= 1
.equ	USE_I2C		= 0
.equ	USE_UART	= 0
.equ	USE_ICP		= 0

;*********************
; PORT D definitions *
;*********************
.equ	BpFET		= 7	;o
.equ	c_comp		= 6	;i common comparator input (AIN0)
.equ	CpFET		= 5	;o
.equ	ApFET		= 4	;o
.equ	CnFET		= 3	;o
.equ	rcp_in		= 2	;i r/c pulse input
.equ	AnFET		= 1	;o
.equ	BnFET		= 0	;o

.equ	INIT_PD		= (1<<ApFET)+(1<<BpFET)+(1<<CpFET)
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
;.equ			= 7	; ADC7
;.equ			= 6	; ADC6
;.equ			= 5	; ADC5
.equ	mux_c		= 4	; ADC4 phase input
.equ	mux_b		= 3	; ADC3 phase input
.equ	mux_a		= 2	; ADC2 phase input
;.equ			= 1	; ADC1
;.equ			= 0	; ADC0

.equ	O_POWER		= 470
.equ	O_GROUND	= 47

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
