# Status Byte

Adding a status byte to the SIMPLE_I2C protocol.
Step 1: collect all errors in the code. DONE
Step 2: collect all states in code. DONE
Step 3: select only what we need to survive (v 1.0)

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
- 

# Other TODOs

- add 1 byte for custom settings to EEPROM including SILENT_OPERATION flag to EEPROM for early read
  i.e. silent operation is as per compiled default unless EEPROM flag is set
- add i2c command for manipulating the above
- keep in mind that MOSI, MISO, and SCK are connected, so we can communicate a bitfield of 3 for settings
  instead of using EEPROM, which is much easier and slightly more sustainable long term (limited EEPROM writes)
- look into the DEAD_LOW_NS and high to see if adjusting for the board/motor may help spin up
