import webbrowser
import pyautogui as pg


msg = input('Enter a Message: ')
number = input('Enter contact number: ')

number = number.split(',')

for i in number:
    web = webbrowser.open_new_tab(f'https://web.whatsapp.com/send?phone=+91{i}&text={msg}')
    pg.press("Enter")