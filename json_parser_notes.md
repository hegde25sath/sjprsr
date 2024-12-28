# JSON Parser
- What? parse JSON by following specs, using recursive descent
- Input: JSON file (arbitrarily large)
- Output: Success/failure.
    - in the case of failure, identify where/what the error is

## Considerations
- Handle nested stuff
- error reporting/handling
- large files
- files with heavy nesting

# JSON

## Intro

- txt format to serialize structured data
- can represent 4 primitive types, 2 structured types
    1. strings: sequence of >= 0 unicode chars
    2. numbers
    3. booleans
    4. null
    5. objects: unordered colelction of >= name/value pairs,
       where name = string, value = any of the types
    6. arrays: ordered sequence of >= 0 values

## JSON Grammar

## Examples

```JSON
"Hello world!"
```

```JSON
42
```

```JSON
true
```

```JSON
{
    "Image": {
        "Width": 800,
        "Height": 600,
        "Title": "View from 15th Floor",
        "Thumbnail": {
            "Url": "http://www.example.com/image/481989943",
            "Height": 125,
            "Width": 100
        },
        "Animated" : false,
        "IDs": [116, 943, 234, 38793]
    }
}
```
