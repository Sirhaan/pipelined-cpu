#!/usr/bin/env python3
#=============================================================================
# convert_hex.py
# Converts objcopy -O verilog output (byte-addressed) to
# word-addressed hex for Verilog $readmemh
#
# Usage:
#   python3 convert_hex.py input_raw.hex output.hex
#=============================================================================

import sys

def convert(input_file, output_file):
    with open(input_file) as f:
        lines = f.readlines()

    words = {}
    current_byte_addr = 0

    for line in lines:
        line = line.strip()
        if not line:
            continue

        if line.startswith('@'):
            # @address is a byte address
            current_byte_addr = int(line[1:], 16)
        else:
            # bytes on this line
            byte_vals = line.split()
            for byte_str in byte_vals:
                byte = int(byte_str, 16)
                word_idx   = current_byte_addr >> 2       # byte addr → word index
                byte_lane  = current_byte_addr & 0x3      # which byte within word

                if word_idx not in words:
                    words[word_idx] = [0, 0, 0, 0]        # 4 bytes per word

                words[word_idx][byte_lane] = byte
                current_byte_addr += 1

    if not words:
        print(f"WARNING: no data found in {input_file}")
        open(output_file, 'w').close()
        return

    max_word = max(words.keys())

    with open(output_file, 'w') as f:
        for idx in range(max_word + 1):
            if idx in words:
                b = words[idx]
                # little-endian: byte0=LSB, byte3=MSB
                word = (b[3] << 24) | (b[2] << 16) | (b[1] << 8) | b[0]
            else:
                word = 0
            f.write(f"{word:08x}\n")

    print(f"Converted {max_word + 1} words → {output_file}")

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("Usage: python3 convert_hex.py <input_raw.hex> <output.hex>")
        sys.exit(1)
    convert(sys.argv[1], sys.argv[2])