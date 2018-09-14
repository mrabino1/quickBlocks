### Options in the config.toml File

```
[settings]
name = topICOs

[display]
accounting = false
logs = false
trace = false
single = false
parse = false
json = true

[fields]
hide=
show=
show_example_all = CTransaction:all|CReceipt:all|CLogEntry:all|CTrace:all|CTraceResult:all|CTraceAction:all|CParameter:all
show_example_logs = \
	CTransaction: none| \
	CReceipt: none, logs \
	CLogEntry: none, articulatedLog \
	CTrace: none

[formats]
trans_fmt = [{BLOCKNUMBER}]\t[{TRANSACTIONINDEX}]\t[{HASH}]
txrans_fmt = [{TIMESTAMP}]\t[{BLOCKNUMBER}]\t[{TRANSACTIONINDEX}]\t[{TRACEID}]\t[{FROM}]\t[{TO}]\t[{ETHER}]\t[{GAS}]\t[{GASPRICE}]\t[{GASUSED}]\t[TRUE{b:ISERROR}]\t[{ENCODING}]\t[{ARTICULATED}]

[[watches]]
list = [
    { address = "0x9f8f72aa9304c8b593d555f12ef6589cc3a579a2", name = "MKR", firstBlock = 4895439, color = "green_c" },
]
```