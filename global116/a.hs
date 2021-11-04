module Main where

import Lib

import Data.Char


stack :: [Int] -> Int
stack [] = 0
stack (x:xs) = x + stack xs
push :: Int -> [Int] -> [Int]
push x xs = x:xs
pop :: [Int] -> [Int]
pop [] = []
pop (x:xs) = xs



