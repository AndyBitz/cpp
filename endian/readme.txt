
HEX		0x10203040

LITTLE ENDIAN

STACK	0x61ff17		0x40	↑
		0x61ff16		0x30	↑
		0x64ff15		0x20	↑
		0x61ff14		0x10	↑


BIG ENDIAN

STACK	0x61ff17		0x10	↑
		0x61ff16		0x20	↑
		0x64ff15		0x30	↑
		0x61ff14		0x40	↑



When a variable is declared/initialized in LITTLE ENDIAN
it asigns eg. 0x1000 to the address 0x61ff14.

This means that 0x61ff14 is the start of the integer
and since an integer has a size of 4 bytes, the addresses 0x61ff15, 0x61ff16 and 0x61ff17 will be used.

	>The most significant byte (0x10) in the smallest address (0x61ff14).


In BIG ENDIAN however, when a variable is declared/initialized the order is turned around.
This means that 0x61ff17 is the start of the integer

	>The least significant byte (0x40) in the smallest address (0x61ff14).