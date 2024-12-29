#!/bin/sh

#CC=gcc
#maxtime=5

INVALID_JSON=0
VALID_JSON=1
PASSED=0
TOTAL=285

echo "============= Tests ================="
for testfile in $( ls ./tests/ ); do
  FIRSTCHAR=${testfile:0:1}
  ./sjprsr $testfile
  RET=$?
  if [[ $RET -eq $INVALID_JSON ]] && [[ $FIRSTCHAR == 'y' ]]; then
    echo $testfile FAILED...
    echo ----------------------------------
  elif [[ $RET -eq $INVALID_JSON ]] && [[ $FIRSTCHAR == 'n' ]]; then
    echo $testfile PASSED...
    let PASSED=PASSED+1
    echo ----------------------------------
  elif [[ $RET -eq $VALID_JSON ]] && [[ $FIRSTCHAR == 'y' ]]; then
    echo $testfile PASSED...
    let PASSED=PASSED+1
    echo ---------------------------------
  elif [[ $RET -eq $VALID_JSON ]] && [[ $FIRSTCHAR == 'n' ]]; then
    echo $testfile FAILED...
    echo ---------------------------------
  fi
done
echo "============ Summary ==================="
echo "Total: " $PASSED " of " $TOTAL
