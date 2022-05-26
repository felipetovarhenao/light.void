# **_light.void~_**
### **Documentation repository**
---

This is the open source documentation for _light.void~_ — a light-dependent digital music interface based on [Leafcutter John's _light thing_](https://youtu.be/X1cmWFP3f8o). 

This documentation includes:
| Item 							| 	File extension 				| Description |
| 		-						|		-						| - |
| Hardware code 				| `.ino` (Arduino) 				| Arduino MEGA 2560 Rev3 source code
| Circuit schematics 			| `.svg`, `.pdf` 				| _light.void~_ circuit schematics, using Arduino MEGA 2560 Rev3, light-dependent resistors and 'regular' resistors.
| Enclosure design 				| `.ai` (Adobe Illustrator)		| Laser printer vector file to cut/engrave acrylic enclosure.
| Graphical User Interface (GUI) 	| `.amxd` (Max for Live device) | Main GUI for light.void~ interface, to be used in MaxMSP/Ableton Live.
---
### Description
**_light.void~_** is a handmade digital photo-controller, consisting of sixteen light sensors, each of which sends data to the computer through an Arduino MEGA (2560 Rev3). The design itself can be considered an ‘inferred replica’ of the more popular **_light thing_** interface by British artist [Leafcutter John](http://leafcutterjohn.com/).  In other words, it's an approximate reproduction of the same design, based on assumptions about how it was built/programmed.

_How it works:_

Each sensor sends 10-bit data values to MaxMSP, where these are normalized to floating point numbers between 0 and 1, after being independently calibrated according to perceived levels of ambient light in order to avoid noisy data. The greater the intensity of the light perceived by each sensor, the greater the value is. This results in sixteen independent data streams available for user-defined mappings.

**_light.void~_** is used in my work [«Umbra» (2019)](https://youtu.be/llalU1W5x4k)

---
### License
ISC License
Copyright © 2022, Felipe Tovar-Henao

Permission to use, copy, modify, and/or distribute this software for any purpose with or without fee is hereby granted, provided that the above copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.