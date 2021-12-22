class Calendar():
    year = 0
    month = 0
    day = 0

    def set_day(self, y, m, d):
        self.year = y
        self.month = m
        self.day = d
        return
    def today(self):
        return str(self.year)+"년 "+str(self.month)+"월 "+str(self.day)+"일"

a = Calendar()
a.set_day(2000,5,16)
print(a.today())

