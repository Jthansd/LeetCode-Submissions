class Solution(object):
    def minTimeToType(self, word):
        time = 0
        pointer = 'a'
        a = ord('a')
        for letter in word:
            letter_val = ord(letter) - a
            pointer_val = ord(pointer) - a
            diff = abs(pointer_val - letter_val)
            if diff > 13:
                time = time + (26 - diff) + 1
            else:
                time = time + diff + 1
        
            pointer = letter

        return time

        