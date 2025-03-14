#!/usr/bin/bash



source "$GTRPAL_DIR"/tools/sh/__init__.sh

log "synchronizing nuklear src with os/gui/nuklear..."

tcd "$GTRPAL_DIR/src/lib/nuklear"

# if [[ -d "$GTRPAL_DIR/src/os/gui/nuklear" ]]; then
#     info "removing existing os/gui/nuklear dir"
#     rm -rf "$GTRPAL_DIR/src/os/gui/nuklear"
# fi

# rsync -vr --exclude="*.md" --exclude="*.py" --exclude="*.sh" --exclude="*.bat" --exclude="*.txt" --exclude="CHANGELOG" --exclude="CREDITS" --exclude="LICENSE" ./src/ "$GTRPAL_DIR/src/os/gui/nuklear"

