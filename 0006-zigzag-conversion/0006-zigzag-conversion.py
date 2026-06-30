class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        string_row = [""]*numRows
        curr_row = 0
        count = 1

        for i in s:
            string_row[curr_row] += i
            if curr_row == 0:
                count = 1
            if curr_row == numRows-1:
                count = -1
            curr_row += count
        return "".join(string_row)