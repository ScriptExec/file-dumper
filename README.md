# Usage
```
file_dumper <file list>
```
## Example
```
file_dumper file1.txt file2.txt
```
## Example usage in a cpp file
```cpp
#include "embed.h"
#include "example_file.bin.cpp"

int main()
{
	stde::export_embed("exported.txt", get_embed(example_file, txt), get_embed_size(example_file, txt));
}
```