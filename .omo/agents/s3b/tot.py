import json
from collections import Counter
st=json.load(open(r'D:\RA2YR_ReSource\.omo\codegen_match\status.json',encoding='utf-8'))
c=Counter(v.get('status') for v in st.values())
print(len(st), dict(c))
