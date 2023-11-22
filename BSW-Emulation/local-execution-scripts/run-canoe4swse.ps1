$testnames = "tu_FanTests.vtestunit"

Push-Location $PSScriptRoot/../

foreach ($testname in $testnames) {
    # & ${env:CANoe4SWSE_InstallDir64}/canoe4sw-se ./SimulationEnvironments/ECU/environment-make/Default.venvironment -d ./test-${testname} --variant-property vTestExpectedToFail=ExpectedToSucceed --win32 --port-rtk-api none --test-unit ./SimulationEnvironments/ECU/environment-make/${testname};
    & canoe4sw-se ./SimulationEnvironments/ECU/environment-make/Default.venvironment -d ./test-${testname} --variant-property vTestExpectedToFail=ExpectedToSucceed --win32 --port-rtk-api none --test-unit ./SimulationEnvironments/ECU/environment-make/${testname};
}

Pop-Location
