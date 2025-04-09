# Yankee

## Development Guide

### SConstruct(SCONS) Build environment
The Yankee is built with SConstcut, or for short, SCONS.

#### Prerequisite: python > 3
To install scons, you require python 3.
To check what python version you have installed, you can use the `python --version` command

#### Scons installation
Once you confirmed you have python installed, you can use the command
`python -m pip install scons`
To install scons

#### Troubleshooting
**PATH Warning**
Important: when installing scons, you might find the following error:
```
WARNING: The scripts scons-configure-cache.exe, scons.exe and sconsign.exe are installed in 'C:\Users\<user>\AppData\Local\Programs\Python\Python39\Scripts' which is not on PATH.
Consider adding this directory to PATH or, if you prefer to suppress this warning, use --no-warn-script-location.
```
If you find this, you will have to add the python folder to your PATH.
If you don't know how to add variables to your PATH, you can find more information here https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/

**Other errors**
If you find any other errors, please open an issue.

#### Usage
Once installed, you should be able to open the project's root folder in your terminal, and run `scons`.
This should generate fully built PBOs in your addons folder.
