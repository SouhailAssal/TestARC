$projectDir = Join-Path "$PSScriptRoot" "\..\.." -Resolve
$RUNNER_OS_VERSION = "ltsc2022"

$CANOE_VERSION = "16.4.4"

docker run --rm -v "${projectDir}:C:/project" -w "C:/project/Integration/local-execution-scripts" -e licenseServerIpAddress="vistrpndvlmt09.vi.vector.int" pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/vtt-davinci-configurator:${RUNNER_OS_VERSION}-7.0.123-vs ./run-vttmake.ps1
docker run --rm -v "${projectDir}:C:/project" -w "C:/project/Integration/FanControlECU/FanControl_Testing" pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/test-unit-build-cli:${RUNNER_OS_VERSION}-7.4.5 TestUnitBuildCLI ./vTESTstudio_FanControl.vtsoproj
docker run --rm -v "${projectDir}:C:/project" -w "C:/project/Integration/local-execution-scripts" pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/canoe4sw-se:${RUNNER_OS_VERSION}-${CANOE_VERSION} .\CANoe4SW-SE-Makefile.ps1
docker run --rm -v "${projectDir}:C:/project" -w "C:/project/Integration/local-execution-scripts" -e licenseServerIpAddress="vistrpndvlmt09.vi.vector.int" pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/canoe4sw-se:${RUNNER_OS_VERSION}-${CANOE_VERSION} .\run-canoe4swse.ps1
