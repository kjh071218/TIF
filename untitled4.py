# -*- coding: utf-8 -*-
"""Untitled4.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1_0-5WW2Nxz-nOYkx_DtCsjObJ3ZZDuMl
"""

n, m = map(int, input().split())

max_number = 0
for _ in range(n):
    numbers = list(map(int, input().split()))
    min_number = min(numbers)
    max_number = max(min_number, max_number)

print(max_number)