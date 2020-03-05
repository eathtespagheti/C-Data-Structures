#!/usr/bin/env bash

cfile="${1}/${2}.c"
headerfile="${1}/${2}.h"
defCheck=$(echo "$2" | tr [a-z] [A-Z])_H

DNT="// * DNT"
MIDDLE=""
EDNT="// * EDNT"
if [ -f "$headerfile" ]; then
    start=0
    end=0
    while read line; do                # Per ogni linea del file
        if [ "$EDNT" = "$line" ]; then # COntrollo se ho trovato la stringa di fine
            end=1
        fi

        if (($end == 1)); then # Se ho trovato la fine
            break
        fi

        if (($start == 1)); then # Se ho trovato l'inizio
            MIDDLE="${MIDDLE}${line}\n"
        fi

        if [ "$DNT" = "$line" ]; then # Controllo se ho trovato la stringa di inizio
            start=1
        fi
    done < <(cat "$headerfile")
fi

# Remove last \n
MIDDLE=$(echo "${MIDDLE%?}")
MIDDLE=$(echo "${MIDDLE%?}")

rm $headerfile
makeheaders $cfile

echo "#ifndef ${defCheck}" >.vscode/tempMakeheaders
echo "#define ${defCheck}" >>.vscode/tempMakeheaders
echo >>.vscode/tempMakeheaders
echo "$DNT" >>.vscode/tempMakeheaders
echo -e "$MIDDLE" >>.vscode/tempMakeheaders
echo "$EDNT" >>.vscode/tempMakeheaders
echo >>.vscode/tempMakeheaders
tail -n +2 $headerfile >>.vscode/tempMakeheaders
echo >>.vscode/tempMakeheaders
echo "#endif // ! ${defCheck}" >>.vscode/tempMakeheaders
mv .vscode/tempMakeheaders $headerfile
clang-format -i -style=file $headerfile
