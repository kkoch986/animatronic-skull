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
| servo shaft coupling | 1 | servo shaft coupling | Hardware |

## Repos

| Repo | Purpose | Docs |
|------|---------|------|
| [kkoch986/skeleton-board-v3](https://github.com/kkoch986/skeleton-board-v3) | Main animatronic control board — ESP32-S3, 16-servo PCA9685 driver, DMX512 input | [README](https://github.com/kkoch986/skeleton-board-v3#readme) |
| [kkoch986/skeleton-eyes](https://github.com/kkoch986/skeleton-eyes) | Eye display system — dual 1.28" TFT eyes, I2C control | [README](https://github.com/kkoch986/skeleton-eyes#readme) |

## Build Process Overview

1. **3D print** the 16 parts in the BOM (`skull-front` through `top-panel`) — skull shell, jaw, rotation/tilt mechanics, spine mounting
2. **Eyes** — assemble PCB + ESP32-S3, flash firmware, mount lenses (see [skeleton-eyes](https://github.com/kkoch986/skeleton-eyes))
3. **Control board** — assemble PCB + ESP32-S3, flash firmware (see [skeleton-board-v3](https://github.com/kkoch986/skeleton-board-v3))
4. **Mechanical assembly** — follow the 12-step assembly guide below (extracted from `assembly-guide.pdf`)
5. **Electronics install** — mount control board + eye board in skull, wire eyes onto the shared I2C bus (eye board address 0x42)
6. **DMX control** — control via DMX512; eyes (+0..+12), servos (+13..+28), WiFi trigger (ch 512). Servo/envelope config via telnet

## Mechanical Assembly Steps

*Tap all holes that receive bolts unless noted.*

### Step 1: Pan/Tilt Platform Block

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | tilting-plate-lower |
| 2 | 1 | tilting-plate-upper |
| 3 | 11 | m3x8mm bolts |
| 4 | 2 | MG995 Servo Motor |
| — | 1 | servo shaft coupling |

### Step 2: Nod Arch

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | left-side-panel |
| 2 | 1 | right-side-panel |
| 3 | 1 | top-panel |
| 4 | 1 | 20mm round servo arm |
| 5 | 8 | m3x10mm bolts |
| 6 | 4 | m3 nuts |
| 7 | 1 | SG90 or MG90 servo |
| 8 | 2 | servo mounting screws (ST2.2x6.5) |

### Step 3: Pan/Tilt/Nod

Center the nod servo before attaching the horn — attach at roughly level nod position. The 35mm bolt just sits in the hole; try sliding a nut down there if it keeps dislocating.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | m3x35mm bolts |
| 2 | 1 | m3x8mm bolts |
| 3 | 1 | nod arch assembly |
| 4 | 1 | pan tilt assembly |

### Step 4: Rotation Arm

Holes in the rotation shaft should be tapped, all others sliding fit. Bearing optional but recommended for alignment/rigidity.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | 20mm round servo arm |
| 2 | 1 | rotating-plate |
| 3 | 4 | m3x8mm bolts |
| 4 | 1 | 683ZZ bearing |
| 5 | 1 | rotation-shaft |

### Step 5: Main Platform Assembly

Backside bolt doesn't really tap into anything — slide a nut back in there (a little difficult). Align the tilt servo to center, set the servo arm so tilt is level.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | pan tilt nod assembly |
| 2 | 1 | rotation arm assembly |
| 3 | 1 | m3x8mm bolts |
| 4 | 1 | m3x12mm bolts |

### Step 6: Spine Adapter

Tap main spine adapter holes. Align rotation servo to center, put shaft coupling so the set screw hole faces straight back — visible through the slot in the back of the spine adapter.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | spine-adapter |
| 2 | 1 | spine motor mount |
| 3 | 1 | MG995 Servo Motor |
| 4 | 1 | 698 bearing |
| 5 | 2 | m3x30mm bolts |
| 6 | 1 | servo shaft coupling |
| 7 | 1 | m3x8mm bolts |

### Step 7: Spine to Main Platform

Align rotation servo to center so you can access the set screw hole.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | spine adapter assembly |
| 2 | 1 | main platform assembly |
| 3 | 1 | M6 Set Screw (comes with servo coupling) |

### Step 8: Main PCB Mounting

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | Main Assembly (Step 7) |
| 2 | 1 | front-bridge pcb mount |
| 3 | 1 | DeadfordManor main animatronic control board |
| 4 | 4 | m3x25mm bolts |

### Step 9: Jaw Attachment

Turn the servo all the way clockwise and align the jaw a little past fully closed — anticipate the position (you can correct the limit in firmware later).

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | Main Assembly |
| 2 | 1 | Jaw (new-skull-jaw) |
| 3 | 1 | Servo Gear |
| 4 | 1 | Jaw Gear |
| 5 | 1 | Jaw Gear Pin (jaw-key) |
| 6 | 1 | m3x25mm bolt |
| 7 | 1 | m3x20mm bolt |

### Step 10: Eye Assembly

Mind the orientation of the 3D-printed frame.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 2 | 34mm Lens |
| 2 | 1 | Lens Cover (frame v2) |
| 3 | 1 | v1.1 Deadford Manor Eye Board |
| 4 | 1 | m3x16mm bolt |
| 5 | 2 | m3 nuts |

### Step 11: Outer Skull Assembly

Eyes should snap into the openings in the front of the skull. Tap the skull-front holes carefully for attaching the back. Side screws adjust lateral skull position / squeeze — don't fully tighten any, just get them to grab the inside, then go around adjusting each until it sits well.

| Item | Qty | Part |
|------|:---:|------|
| 1 | 1 | Main assembly |
| 2 | 1 | Skull front |
| 3 | 1 | Skull back |
| 4 | 2 | m3x35mm bolts |
| 5 | 1 | m3x30mm bolts |
| 6 | 1 | Eye assembly |
| 7 | 4 | m3x12mm bolts |

### Step 12: Assembly Complete

Mount the skull to the fixture. Verify all pieces move unobstructed; final limits can be tweaked in firmware. Enjoy!

### Related Repos

- `skeleton-eye2` local copy == `kkoch986/skeleton-eyes`
- Eye wiring diagram: [skeleton-eyes/wiring.svg](https://github.com/kkoch986/skeleton-eyes/blob/master/wiring.svg)