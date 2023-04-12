import pandas as pd
import win32com.client as win32

# import data base

tab_sales = pd.read_excel('Vendas.xlsx')

# data base
pd.set_option('display.max_columns', None)

# billing per store
billing = tab_sales[['ID Loja', 'Valor Final']].groupby('ID Loja').sum()

# products per store

products_store = tab_sales[['ID Loja', 'Quantidade']].groupby('ID Loja').sum()

# product average price

tab = tab_sales[['ID Loja', 'Valor Final', 'Quantidade']].groupby('ID Loja').sum()
ticket = (tab['Valor Final'] / tab['Quantidade']).to_frame()
ticket = ticket.rename(columns ={0: 'Ticket Médio'})





