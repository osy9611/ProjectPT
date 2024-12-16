@echo off
REM UE Project Path
SET PROJECT_PATH=D:\Study\Unreal\ProjectPT\Client\ProjectPT.uproject

REM UE Editor Path
SET UE_EDITOR_PATH=C:\Program Files\Epic Games\UE_5.4\Engine\Binaries\Win64\UnrealEditor-Cmd.exe

REM PYTON_SCRIPT
SET PYTHON_SCRIPT=D:\Study\Unreal\ProjectPT\Client\Intermediate\PythonStub\TableGenerator.py

"%UE_EDITOR_PATH%" "%PROJECT_PATH%" -run=pythonscript -script="%PYTHON_SCRIPT%" -log

echo Script execution completed.
pause