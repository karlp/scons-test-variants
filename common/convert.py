from __future__ import print_function
import json
import sys

def write_item(item, f):
    print("#define OPTION_%s (%d)" % (item["option"], item["value"]), file=f)

# Catching user errors is for losers....
with open(sys.argv[2], "w") as of:
    with open(sys.argv[1]) as f:
        j = json.load(f)
        #print("json looks like: ", j)
        for item in j:
            write_item(item, of)

