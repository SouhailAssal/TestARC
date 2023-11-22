Push-Location $PSScriptRoot/../

Write-Output "Next Step: Calling License Client to add License Server ${env:licenseServerIpAddress}"
& 'C:\Program Files (x86)\Vector License Client\Vector.LicenseClient.exe' -addServers ${env:licenseServerIpAddress} -v
Write-Output "Adding License Server complete."
& ${env:vVIRTUALtarget_InstallDir}/VttMake make ./FanControlECU/FanControl_VTT/FanControl.vttmake

Pop-Location
