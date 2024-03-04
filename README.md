# Matter Logic

Demo application for custom Matter devices. Running on Nordic Semi SoC using Zephyr/ncs.

## How to use

First, install the [Zephyr dependencies](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#install-dependencies) and the [Zephyr Toolchains](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#install-the-zephyr-sdk)

This repo is a `west` workspace. To clone it, you need to create a `venv` and install `west` inside this `venv`:

```sh
cd path\to\your\workspace
python3.11 -m venv matter_logic\.venv

# On cmd
matter_logic\.venv\Scripts\activate.bat

# On PowerShell
matter_logic\.venv\Scripts\Activate.ps1
```

```sh
pip install west
```

```sh
west init -m git@github.com:SamyFrancelet/matter_logic.git --mr main matter_logic
cd matter_logic
west update

pip install -r .\zephyr\scripts\requirements.txt
```
