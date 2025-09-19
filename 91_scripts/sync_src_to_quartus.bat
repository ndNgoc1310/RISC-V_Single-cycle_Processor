@echo off
echo Syncing modified files from OneDrive to Quartus folder...
robocopy "C:\Users\NCPC\OneDrive\BKLearning\RISC-V_Single-cycle_Processor\00_src" "C:\RISC-V_Single-cycle_Processor_Quartus\top\00_src" /MIR /XD .git __pycache__
echo Done.
pause