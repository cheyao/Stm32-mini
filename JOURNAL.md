---
title: "STM32 Low-power Application"
github: "https://github.com/cheyao/stm32-mini"
description: "Low power application development for stm32"
created_at: "2026-11-17"
total_time: "4h 54m"
---

# November 17, 2026: Started the schematic

![](https://fabricate.hackclub-assets.com/8232ab0aa09d8e4446622bfa273733a7b904e936d6cd49538641de422b2d17ac/image-png/image.png)

Drew the start of the schematic

Picked stm32u07 series for usb crystalless, low power and low price. Didn't need u5's compute, and u3 was less lp during sleep. Picked the 7 series cuz there is no need for 8's aes, and <7 doesn't have usb.

![](https://fabricate.hackclub-assets.com/d22f819f725484a5a4609ca211a9ee3f1948b63b58cde03de5ee3e6567e923ea/image-png/image.png)

4 low power leds for lp indication.

**Total time spent: 1h**

# November 17, 2026: Finished drawing schematic

![](https://fabricate.hackclub-assets.com/98e51cbc1f809723186be5211ac03d245a863ece2646dcb4328eb0800812a1e9/image-png/image.png)

Finished schematic

Decoupled everything.

![](https://fabricate.hackclub-assets.com/bbbde0accc6db303aa1d59e5d77d7feb3a4312fe62213d426aee2934261879bc/image-png/image.png)

Picked low iq low CCCV lipo charger.

![](https://fabricate.hackclub-assets.com/210a98c81d0fca70908b615c1b66d71081225492a31ad5d49c4955b2c7ef5137/image-png/image.png)

Impl. dual-pp system

![](https://fabricate.hackclub-assets.com/3403b14bbe1c1bb85cd207449594a6b44ca87a69068652ed3ae1e76811e3ff83/image-png/image.png)

Also low iq ldo with lo do.

![](https://fabricate.hackclub-assets.com/168ca053ab2b2a8b4b915758ee41d3d3b427e93294edaf30a45488213ea5d5bf/image-png/image.png)

found 32khz crystal that satisfies Gm and Gc criterias, with low lsrdrv that demands high esr.

**Total time spent: 1h 12m**

# November 18, 2026: Finished PCB

![](https://fabricate.hackclub-assets.com/aab21d65abf707a48bee2732f5d1349edd0fa1d4809114131a89de0e461d777d/image-png/image.png)
Added lcsc numbers

![](https://fabricate.hackclub-assets.com/5ae57ba3d56dede5128b8eb27a94f51a0253cedac34cf96136a51efa53c15a5d/image-png/image.png)
Changed schems to incl. pin headers and removed eink conn.

Also optimized led currents.

![](https://fabricate.hackclub-assets.com/77595848025df0969cd5dd8d01c85f513f5b6f9c1793e9605eaedcaa20ada259/image-png/image.png)

Then finished PCB routing. USB has matched imp. Diff is within tolerances.

**Total time spent: 2h 30m**

# November 18, 2026: Published repo

![](https://fabricate.hackclub-assets.com/fb119face086019a499cb3cdaa6942fbcd7a5dcafbbad8be106752b97fe8a2e2/image-png/image.png)

Wrote the readme, added descriptions, cleaned everything up for shipping etc.

Published git, added bom, added images to the readme and more that you can see

**Total time spent: 12m**

