# req_years(first_digit_of_input+1)*(10**(number_of_digits_of_input-1))-given_year
# for example:
# if input=941
# req_years=9*100+1*100-941
#          =1000-941
#          =59
input_year=int(input())
digits=[int(i) for i in str(input_year)]
req_years = (digits[0]+1) * (10**(len(str(input_year))-1)) - input_year
print(req_years)