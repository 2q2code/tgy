# Status Byte

## Errors

### Check hardware

1. phase a stuck high
2. phase b stuck high
3. phase c stuck high
4. AIN1 stuck high
5. AIN0 stuck high
6. Phase a low-side drive broken
7. b
8. c
9. phase a high-side drive broken
10. b
11. c

### Control start

1. cell count good? i.e. power ok?

### reset causes

1. brown out
2. external reset
3. watchdog reset (will enter looping state)
4. unknown (8 bit code)
5. 

## States (also points of execution)

- power to fets on or off
- brakes on or off
- checking hardware
- armed/disarmed
- checking hardware
- counting cells
- starting
- disarming
- arming
- waiting for arm
- starting up
- waiting for power on init
- start from running
- running
- forward/reverse
- waiting for spin down
- restarting control
- demag-timeout
- wait timeout
- wait commutation
- wait for blank
- wait for demag
- wait blindly

# AVR TODOs

- this status byte thing so we have feedback on state remotely (later - we now have sound when we want it - which is enough to install it and move on to the rest first)
- look into the DEAD_LOW_NS and high to see if adjusting for the board/motor may help spin up (later)

