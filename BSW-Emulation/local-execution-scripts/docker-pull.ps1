$RUNNER_OS_VERSION = "ltsc2022"

docker pull pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/vtt-davinci-configurator:${RUNNER_OS_VERSION}-7.0.123-vs
docker pull pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/canoe4sw-se:${RUNNER_OS_VERSION}-16.4.4
docker pull pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/canoe-test-report-viewer:${RUNNER_OS_VERSION}-16.3
docker pull pnd-cdevopsconcepts-docker-dev.vegistry.vg.vector.int/windows/test-unit-build-cli:${RUNNER_OS_VERSION}-7.4.5
