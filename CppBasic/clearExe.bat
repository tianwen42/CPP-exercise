@echo off
for /r %%f in (*.exe) do (
    del "%%f"
)

echo Deleting exe files completed.

pause