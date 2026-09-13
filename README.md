# Animatronic Skull Build Guide

## Full BOM

| Part Number | Qty | Part Name | Product Line |
|-------------|:---:|-----------|--------------|
| front-bridge | 1 | front-bridge pcb mount | 3D Printed |
| new-skull-jaw | 1 | Jaw | 3D Printed |
| jaw-gear | 1 | Jaw Gear | 3D Printed |
| jaw-key | 1 | Jaw Gear Pin | 3D Printed |
| left-side-panel | 1 | left-side-panel | 3D Printed |
| right-side-panel | 1 | right-side-panel | 3D Printed |
| rotating-plate | 1 | rotating-plate | 3D Printed |
| rotation-shaft-v2 | 1 | rotation-shaft | 3D Printed |
| servo-gear | 1 | Servo Gear | 3D Printed |
| new-skull-back | 1 | Skull back | 3D Printed |
| skull-front | 1 | Skull front | 3D Printed |
| spine-motor-mount | 1 | spine motor mount | 3D Printed |
| spine-adapter | 1 | spine-adapter | 3D Printed |
| tilting-plate-lower | 1 | tilting-plate-lower | 3D Printed |
| tilting-plate-upper | 1 | tilting-plate-upper | 3D Printed |
| top-panel | 1 | top-panel | 3D Printed |
| DeadfordManor main animatronic control board | 1 | DeadfordManor main animatronic control board | Electronics |
| MG995 | 3 | MG995 Servo Motor | Electronics |
| SG90 | 1 | SG90 or MG90 servo | Electronics |
| lens | 2 | 34mm Lens | Eyes |
| frame v2 | 1 | Lens Cover | Eyes |
| v1.1 Deadford Manor Eye Board | 1 | v1.1 Deadford Manor Eye Board | Eyes |
| servo horn | 2 | 20mm round servo arm | Hardware |
| 683ZZ | 1 | 683zzbearing | Hardware |
| 698 bearing | 1 | 698 bearing | Hardware |
| Hex nut grade A & B M3x0.5 | 5 | m3 nuts | Hardware |
| Socket button head screw M3x0.5 x 10 Stainless Steel | 8 | m3x10mm bolts | Hardware |
| Socket button head screw M3x0.5 x 12 Stainless Steel Black Zinc | 5 | m3x12mm bolts | Hardware |
| Socket button head screw M3x0.5 x 16 | 1 | m3x16mm bolt | Hardware |
| Socket button head screw M3x0.5 x 20 Stainless Steel Black Zinc | 1 | m3x20mm bolt | Hardware |
| Socket button head screw M3x0.5 x 25 | 5 | m3x25mm bolt | Hardware |
| Socket button head screw M3x0.5 x 30 Stainless Steel Black Zinc | 3 | m3x30mm bolts | Hardware |
| Socket button head screw M3x0.5 x 35 Stainless Steel Black Zinc | 3 | m3x35mm bolts | Hardware |
| Socket button head screw M3x0.5 x 8 Stainless Steel Black Zinc | 18 | m3x8mm bolts | Hardware |
| Comes with servo coupling | 1 | M6 Set Screw | Hardware |
| Cross recessed flat head countersunk tapping screw ST2.2x6.5 Stainless Steel | 2 | servo mounting screws | Hardware |
| Servo to Shaft Coupler (H25T Spline, 1/4" Bore) | 1 | Servo to Shaft Coupler (H25T Spline, 1/4" Bore) | Hardware |

## Related Projects

| Project | Purpose | Docs |
|---------|---------|------|
| [kkoch986/skeleton-board-v3](https://github.com/kkoch986/skeleton-board-v3) | Main animatronic control board — ESP32-S3, 16-servo PCA9685 driver, DMX512 input | [README](https://github.com/kkoch986/skeleton-board-v3#readme) |
| [kkoch986/skeleton-eyes](https://github.com/kkoch986/skeleton-eyes) | Eye display system — dual 1.28" TFT eyes, I2C control | [README](https://github.com/kkoch986/skeleton-eyes#readme) |

Eye wiring diagram: [skeleton-eyes/wiring.svg](https://github.com/kkoch986/skeleton-eyes/blob/master/wiring.svg)

## Build Process Overview

1. **3D print** the 16 parts in the BOM (`skull-front` through `top-panel`) — skull shell, jaw, rotation/tilt mechanics, spine mounting
2. **Eyes** — assemble PCB + ESP32-S3, flash firmware, mount lenses (see [skeleton-eyes](https://github.com/kkoch986/skeleton-eyes))
3. **Control board** — assemble PCB + ESP32-S3, flash firmware (see [skeleton-board-v3](https://github.com/kkoch986/skeleton-board-v3))
4. **Mechanical assembly** — follow the 12-step assembly guide in [`assembly-guide.pdf`](assembly-guide.pdf)
5. **Electronics install** — mount control board + eye board in skull, wire eyes onto the shared I2C bus (eye board address 0x42)
6. **DMX control** — control via DMX512; eyes (+0..+12), servos (+13..+28), WiFi trigger (ch 512). Servo/envelope config via telnet

## Mechanical Assembly

Follow the 12-step assembly guide in [`assembly-guide.pdf`](assembly-guide.pdf) — it covers the full build: pan/tilt platform, nod arch, rotation arm, spine adapter, PCB mounting, jaw, eyes, and outer skull shell.