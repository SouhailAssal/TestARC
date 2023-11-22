# BSW Emulation currently unusable

# Build VTT for BSW Integration
#& "${env:vVIRTUALtarget_InstallDir}VttMake.exe"
& 'C:\Program Files\Vector vVIRTUALtarget 7\Exec64\VttMake.exe' make .\Integration\FanControlECU\FanControl_VTT\FanControl.vttmake

# Export Tests
& 'D:\util\TestUnitBuildCLI-8.0.123\Exec64\TestUnitBuildCLI.exe' .\Integration\FanControlECU\FanControl_Testing\vTESTstudio_FanControl.vtsoproj

# Build Simulation
& ${env:CANoe4SWSE_InstallDir64}\environment-make.exe .\Integration\FanControl.venvironment.yaml -o ./environment-make/ -A Win32
# Build Tests
& ${env:CANoe4SWSE_InstallDir64}\test-unit-make.exe -e ./environment-make/Default.venvironment `
  .\Integration\FanControlECU\FanControl_Testing\FanTests\FanTests.vtuexe
#  .\Integration\FanControlECU\FanControl_Testing\tu_Diagnostic\tu_Diagnostic.vtuexe


 