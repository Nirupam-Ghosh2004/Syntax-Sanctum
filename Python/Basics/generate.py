import pyotp
import hashlib
import base64

def generate_totp(email):
    secret = (email + "").encode()
    # Base32 encode the secret (as required by pyotp)
    base32_secret = base64.b32encode(secret).decode()
    # Use SHA-512
    totp = pyotp.TOTP(base32_secret, digest=hashlib.sha512, digits=10, interval=30)
    return totp.now()

email = ""
print(generate_totp(email))
