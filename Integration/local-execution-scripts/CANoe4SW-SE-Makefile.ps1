Push-Location $PSScriptRoot/../

& ${env:CANoe4SWSE_InstallDir64}/environment-make -o ./SimulationEnvironments/ECU/environment-make -A Win32 ./SimulationEnvironments/ECU/;
& ${env:CANoe4SWSE_InstallDir64}/test-unit-make -e ./SimulationEnvironments/ECU/environment-make/Default.venvironment -o ./SimulationEnvironments/ECU/environment-make/ `
    ./FanControlECU/FanControl_Testing/tu_FanTests/tu_FanTests.vtuexe;

Pop-Location
