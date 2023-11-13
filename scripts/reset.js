// Usage: node scripts/reset.js
import 'dotenv/config.js'
import { copyFile, writeFile } from 'fs/promises'

const filepath = `${process.env.BASE_DIR}/${process.env.MAIN_FILENAME}`
const inputpath = `${process.env.BASE_DIR}/${process.env.DEV_INPUT_FILENAME}`
const outputpath = `${process.env.BASE_DIR}/${process.env.DEV_OUTPUT_FILENAME}`

const l = (...args) => console.log('[reset]', ...args, '...')
l(`Copying scripts/reset.cpp to ${filepath}`)
await copyFile('scripts/reset.cpp', filepath)
l('reseting input and output file')
await writeFile(inputpath, "1\n1")
await writeFile(outputpath, "")
l('Done')