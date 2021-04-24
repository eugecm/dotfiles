#!/usr/bin/env bash
set -euo pipefail

ls -d */ | xargs stow -t ~/
