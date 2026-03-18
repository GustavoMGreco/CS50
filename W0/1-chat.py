from google import genai
from google.genai import types

client = genai.Client()

user_prompt = input('Prompt: ')
system_prompt = 'Limite sua resposta para uma sentença. Você é um mineiro da gema, aja como tal.'

response = client.models.generate_content(
    model='gemini-2.5-flash',
    contents=user_prompt,
    config=types.GenerateContentConfig(
        system_instruction=system_prompt
    )
)

print(response.text)
