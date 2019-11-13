### Compile mcpat
```
 % cd mcpat
 % make
 % cd ../dsent
 % make
```
### Quick start
```
 % cd gem5-mcpat-parser
 % ./run.py input/tuan_stats.txt output/tuan_test.xml output/mcpat_result_tuan
```
`input/tuan_stats.txt` is the gem5 generated stats.txt.

`output/tuan_test.xml` will generate the mcpat configuration xml.

`output/mcpat_result_tuan` will show the results.
```
 % cd ../dsent
 % ./dsent -cfg configs/electrical-mesh.cfg
```
`configs/electrical-mesh.cfg` contains the configuration about the target mesh topology.
