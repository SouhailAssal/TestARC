mkdir "./test/test-units"
$testFolders = Get-ChildItem -LiteralPath "./test/vTestStudio" -Directory ;
$vtuexes = Get-ChildItem -LiteralPath $testFolders.FullName -Filter "*.vtuexe";
foreach($file in $vtuexes){
    Copy-Item -LiteralPath $file.FullName -Destination (Join-Path "./test/test-units" $file.Name);
}