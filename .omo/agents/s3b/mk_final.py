import json
ROOT = r'D:\RA2YR_ReSource'
st = json.load(open(rf'{ROOT}\.omo\codegen_match\status.json', encoding='utf-8'))
cf = sorted(k for k, v in st.items() if v.get('status') == 'COMPILE_FAIL')
json.dump([{'addr': a, 'family': 's3b_final'} for a in cf],
          open(rf'{ROOT}\.omo\agents\s3b\batch_cf_final.json', 'w', encoding='utf-8'), indent=1)
print('final CF batch:', len(cf))
