# SvenBXT

SvenBXT is a complete remake of [BunnymodXT](https://github.com/YaLTeR/BunnymodXT), designed specifically for Sven Co-op 5.25.
<br>You can legally use this tool for [Sven Co-op runs](https://www.speedrun.com/sven_coop).</br>

<br>Download latest release: [CLICK](https://github.com/ScriptedSnark/SvenBXT/releases/latest)</br>
Download nightly build: [CLICK](https://nightly.link/ScriptedSnark/SvenBXT/workflows/CI/new)

## Supported versions
- 5.11
- 5.22
- 5.23
- 5.25
- 5.26-rc1 ([NOT SUPPORTED ON LINUX](https://github.com/ScriptedSnark/SvenBXT/issues/11))
- 5.26 ([NOT SUPPORTED ON LINUX](https://github.com/ScriptedSnark/SvenBXT/issues/11))

Sven Co-op 4.x or older are not planned to be supported.

## Installation / Usage

### Windows
SvenBXT can be installed as a [MetaHook](https://github.com/hzqst/MetaHookSv)/[SvenMod](https://github.com/sw1ft747/svenmod)/[StarLoader](https://github.com/autisoid/StarLoader) plugin.
Also can be injected by any injector (even deprecated one from `rebased` branch).

#### MetaHook
1. Move `SvenBXT.dll` to `svencoop/metahook/plugins`
2. Write `SvenBXT.dll` in `svencoop/metahook/configs/plugins.lst`

#### SvenMod
1. Move `SvenBXT.dll` to `svenmod/plugins`
2. Open `svenmod/plugins.txt` and write `"SvenBXT"			"1"` inside plugins tab

```
// SvenMod
// List of plugins to load

"Plugins"
{
	"SvenBXT"			"1"
	
	"Settings"
	{
		"LoadDelay"				"0.5" // in seconds
	}
}
```

You can find additional info about that [here](https://github.com/sw1ft747/svenmod#adding-plugins).


#### StarLoader
1. Move `SvenBXT.dll` to `starloader` directory
2. Rename `SvenBXT.dll` to `SvenBXT.asi`

### Linux
You can use the `runsven.sh` script. Correct the paths at the top of the script if necessary.

## Credits
**Thanks to [YaLTeR](https://github.com/YaLTeR) for [BunnymodXT](https://github.com/YaLTeR/BunnymodXT)!**

Thanks to [autisoid](https://github.com/autisoid) for SvenMod/MetaHook emulators.
