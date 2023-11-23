# paths to the files in the CANoe4SW SE installation directory
$CANoeILNLVectorDLL = Join-Path -Path $env:CANoe4SWSE_InstallDir64 "..\Exec32\CANoeILNLVector.dll";
$CANoeILNLVectorDLL_ERT = Join-Path -Path $env:CANoe4SWSE_InstallDir64 "..\Exec32\ERT\CANoeILNLVector.dll";
$CANoeILNLVectorVMODULE = Join-Path -Path $env:CANoe4SWSE_InstallDir64 "CANoeILNLVector.vmodule";
$nodeLayerPath = "./environment-make/nodelayer";
# the .vmodule file from canoe4sw se installation has other paths set
$nodeLayerPathExec32 = "./environment-make/Exec32";
$nodeLayerPathExec32ERT = "./environment-make/Exec32/ERT";

#create nodelayer folder, needed for environment-make -> see .venvironment.yaml
mkdir -Path $nodeLayerPath -Force;
mkdir -Path $nodeLayerPathExec32;
mkdir -Path $nodeLayerPathExec32ERT ;

# copy files from canoe4sw se installation directory into nodelayer folder
Copy-Item -Path $CANoeILNLVectorDLL -Destination $nodeLayerPathExec32;
Copy-Item -Path $CANoeILNLVectorDLL_ERT -Destination $nodeLayerPathExec32ERT;
Copy-Item -Path $CANoeILNLVectorVMODULE -Destination $nodeLayerPath;