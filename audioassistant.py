import speech_recognition as sr
import webbrowser
sr.Microphone(device_index=1)
r=sr.Recognizer()
r.energy_threshold=5000
with sr.Microphone() as source:
    print('Speak')
    audio=r.listen(source)
    try:
        text=r.recognize_google(audio)
        print('You said:',text)
        url='https://www.google.com/search?q'
        search_url=url+text
        webbrowser.open(search_url)
    except:
        print("Can't recognize")
